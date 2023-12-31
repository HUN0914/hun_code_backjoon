*********************

DP 문제이다.

어떠한 수를 받았을 때, 최대 4자리로 표현이 가능한 것을 구현한 것인데,
만약 제곱수라면 더했을 때의 개수가 하나만 있으면 된다.

그렇기에, 제곱수인 경우에는 전부 DP[N]=1로 저장을 해 준 뒤,

나머지 수들에 대하여 만약 DP[8]은 DP[1]+DP[7], DP[4]+DP[4]로 표현할 수있는데 (4는 2의 제곱, 그리고 제곱수가 무조건 껴야 최소한의 횟수로 표현이 가능하다.) 이 두 CASE에 대하여 MIN인 값을 DP에 저장을 해주면 되는 문제.

사고가 어려웠던 문제였다.


************************


# [Silver III] Four Squares - 17626 

[문제 링크](https://www.acmicpc.net/problem/17626) 

### 성능 요약

메모리: 2216 KB, 시간: 24 ms

### 분류

브루트포스 알고리즘, 다이나믹 프로그래밍

### 문제 설명

<p>라그랑주는 1770년에 모든 자연수는 넷 혹은 그 이하의 제곱수의 합으로 표현할 수 있다고 증명하였다. 어떤 자연수는 복수의 방법으로 표현된다. 예를 들면, 26은 5<sup>2</sup>과 1<sup>2</sup>의 합이다; 또한 4<sup>2</sup> + 3<sup>2</sup> + 1<sup>2</sup>으로 표현할 수도 있다. 역사적으로 암산의 명수들에게 공통적으로 주어지는 문제가 바로 자연수를 넷 혹은 그 이하의 제곱수 합으로 나타내라는 것이었다. 1900년대 초반에 한 암산가가 15663 = 125<sup>2</sup> + 6<sup>2</sup> + 1<sup>2</sup> + 1<sup>2</sup>라는 해를 구하는데 8초가 걸렸다는 보고가 있다. 좀 더 어려운 문제에 대해서는 56초가 걸렸다: 11339 = 105<sup>2</sup> + 15<sup>2</sup> + 8<sup>2</sup> + 5<sup>2</sup>.</p>

<p>자연수 <em>n</em>이 주어질 때, <em>n</em>을 최소 개수의 제곱수 합으로 표현하는 컴퓨터 프로그램을 작성하시오.</p>

### 입력 

 <p>입력은 표준입력을 사용한다. 입력은 자연수 <em>n</em>을 포함하는 한 줄로 구성된다. 여기서, 1 ≤ <em>n</em> ≤ 50,000이다.</p>

### 출력 

 <p>출력은 표준출력을 사용한다. 합이 <em>n</em>과 같게 되는 제곱수들의 최소 개수를 한 줄에 출력한다.</p>

