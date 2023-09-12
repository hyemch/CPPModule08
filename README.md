# CPPModule08
Templated containers, iterators, algorithms

-----------------------------------------
## Module-specific rules

- 이 모듈에서는, 표준 컨테이너와 표준 알고리즘 없이도 exercises를 해결할 수 있다.
- 그러나 `그것들을 사용하는 것이 바로 이 모듈의 목표`이다.
- STL을 사용할 수 있다.
    - Containers (vector/list/map/and so forth)
    - Algorithms (defined in header <algorithm>)
- 또한, 가능한 많이 사용해야 한다. → 적절한 곳에 적용하기 위해 최선을 다할 것!
- 그렇지 않으면, 코드가 예상대로 작동 하더라도 매우 나쁜 성적을 받게 될 것이다. 게으르지 마라.
- 평소처럼 헤어파일에 templates를 정의할 수 있다.
- 또는, 원한다면, 헤더 파일에 템플릿을 선언하고 그 구현을 .tpp파일에 작성할 수 있다.
- 어떤 경우든, 헤더파일은 필수이고 .tpp 파일은 선택사항이다.

## Exercise00: Easy find

| Turn-in directory   | ex00                                                             |
|---------------------|------------------------------------------------------------------|
| Files               | Makefile, main.cpp, easyfind.hpp and optional file: easyfind.tpp |
| Forbidden functions | None                                                             |
- 첫 번째 easy exercise는 올바른 출발을 위한 방법이다.
- type T를 허용하는 함수 템플릿 `easyfind`를 작성한다.
    - 두 개의 매개변수가 필요하다.
    - 첫 번째 매개변수는 type T
    - 두 번째 매개변수는 integer
- T가 integers의 컨테이너라고 가정할때
    - 이 함수는 첫 번째 매개변수에서 두 번째 매개변수의 첫 번째 항목을 찾아야 한다.
- 일치하는 항목을 찾지 못하면 예외를 발생시키거나, 원하는 오류 값을 반환할 수 있다.
- inspriation이 필요하다면, 표준 컨테이너가 어떻게 작동 하는지 분석해보아라.
- 물론, 모든 것이 예상대로 작동하는지 확인하기 위해 자체 테스트를 구현하고 제출할 것.

<aside>
ℹ️  연관 containers를 처리할 필요는 없다.

</aside>

## Exercise01: Span

| Turn-in directory | ex01 |
| --- | --- |
| Files | Makefile, main.cpp, Span.hpp, Span.cpp |
| Forbidden functions | None |
- 최대 N개의 integers 를 저장할 수 있는 `Span class`를 만든다.
    - N은 unsigned int 변수이며 생성자에 전달되는 유일한 매개변수이다.
    - 멤버함수 addNumber()
        - Span에 하나의 숫자를 추가한다.
        - Span을 채우기 위해 사용된다.
        - 이미 N개의 요소가 저장되어 있는 경우 새 요소를 추가하려고 하면 exception이 발생한다.
    - shortestSpan()
        - 각각 저장된 모든 숫자 사이의 최단 span (또는 원하는 거리)
        - 저장된 숫자가 없거나, 하나만 있으면 span을 찾을 수 없다. → exception을 던진다.
    - longestSpan()
        - 각각 저장된 모든 숫자 사이의 최장 span (또는 원하는 거리)
        - 저장된 숫자가 없거나, 하나만 있으면 span을 찾을 수 없다. → exception을 던진다.
- 아래 테스트보다 더 철저한 테스트를 작성해라. 적어도 최소 10,000개의 숫자로 span을 테스트 해라. 더 많으면 좋다!
- 예제 테스트

```cpp
int main() 
{
  Span sp = Span(5);

	sp.addNumber(6); 
	sp.addNumber(3); 
	sp.addNumber(17); 
	sp.addNumber(9); 
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl; 
	std::cout << sp.longestSpan() << std::endl;
	
	return 0; 
}
```

```cpp
$> ./ex01 
2
14 
$>
```

- 마지막으로, 다양한 range of iterators를 사용해 span을 채우면 좋을 것이다.
- addNumber()를 수천번 호출하는 것은 매우 성가신 일이다.
    - `멤버 함수를 구현`하여, 한 번의 호출로 스팬에 많은 숫자를 추가해라.

<aside>
💡 힌트가 떠오르지 않는다면 컨테이너를 공부해라. 
일부 멤버 함수는 컨테이너에 elements 시퀀스를 추가하기 위해 다양한 iterators를 사용한다.

</aside>

## Exercise02: Mutated abomination

| Turn-in directory | ex02 |
| --- | --- |
| Files | Makefile, main.cpp, MutantStack.hpp |
| Forbidden functions | None |
- 이제 더 어려운 문제로 넘어갈 차례이다. weird한 것을 개발해보자!
- std::stack 컨테이너는 매우 훌륭하다.

  안타깝게도, 이 컨테이너는 이터러블하지 않은 유일한 STL 컨테이너 중 하나이다. That;s too bad.

- 하지만 우리가 왜 이것을 accept 해야할까? 특히 원래 스택을 마음대로 도살하여 누락된 기능을 만들 수 있다면 더욱.
- 이 문제를 바로잡으려면, std::stack 컨테이너를 이터러블하게 만들어야 한다.
- `MutantStack` 클래스를 작성한다.
    - std::stack 스택으로 구현한다.
    - 모든 멤버함수와 추가 기능인 iterators를 제공한다.
- 물론 모든 것이 예상대로 작동하는지 확인하기 위해 직접 테스트를 작성한다.
- 테스트 예제

```cpp
int main()
{
	MutantStack<int>    mstack;

	mstack.push(5); 
	mstack.push(17);
	
	
	std::cout << mstack.top() << std::endl; 
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3); 
	mstack.push(5); 
	mstack.push(737); 
	//[...] 
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite) 
	{
	    std::cout << *it << std::endl;
			++it; 
	}
	std::stack<int> s(mstack); 
	return 0;
}
```

- 한 번은 돌연변이스택(MutantStack)으로 실행하고, 두 번째는 MutantStack을 예를 들어 std::list로 대체하여 실행하면, 두 출력은 동일해야 한다.
- 물론, 다른 컨테이너를 테스트할 때는 해당 멤버 함수를 사용하여 아래 코드를 업데이트 해라.
  (push()는 push_back()이 될 수 있다.)