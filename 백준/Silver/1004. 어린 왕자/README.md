*******************************

혼자 못 풀어서 아래 사이트를 참고하였다..

https://cocoon1787.tistory.com/350

행성이 츨발점[1] 혹은 도착점[2]의 좌표를 보유하여야 한다.

[1]의 case

출발점과 중점 사이의 거리 < 원의 반지름 이면서!
도착점과 중점 사이의 거리 > 원의 반지름 이여야 한다.
[2번째 줄의 이유는 1번째의 원 내에 도착점까지 보유를 하게 된다면, counting을 할 필요가 없기 때문이다.]

[2]의 case

도착점과 중점 사이의 거리 < 원의 반지름 이면서!
출발점과 중점 사이의 거리 > 원의 반지름 이여야 한다.

그리고, 이 때 처음에 좌표를 이용하여 풀어줬다가 틀렸는데, 그 이유는 바로
원 이기 때문에 
*(사각형이 아니다)* 점과 점 사이의 거리와 반지름과의 관계를 이용해줘야만 원 내부에 점이 있는지
없는지 확실히 알기 때문에 좌표가 아닌 점 간의 거리를 이용해주어야 한다.






******************************


# [Silver III] 어린 왕자 - 1004 

[문제 링크](https://www.acmicpc.net/problem/1004) 

### 성능 요약

메모리: 2020 KB, 시간: 12 ms

### 분류

기하학, 수학

### 문제 설명

<p>어린 왕자는 소혹성 B-664에서 자신이 사랑하는 한 송이 장미를 위해 살아간다. 어느 날 장미가 위험에 빠지게 된 것을 알게 된 어린 왕자는, 장미를 구하기 위해 은하수를 따라 긴 여행을 하기 시작했다. 하지만 어린 왕자의 우주선은 그렇게 좋지 않아서 행성계 간의 이동을 최대한 피해서 여행해야 한다. 아래의 그림은 어린 왕자가 펼쳐본 은하수 지도의 일부이다.</p>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/upload/201003/dfcmhrjj_113gw6bcng2_b.gif" style="height:412px; width:524px"></p>

<p>빨간 실선은 어린 왕자가 출발점에서 도착점까지 도달하는데 있어서 필요한 행성계 진입/이탈 횟수를 최소화하는 경로이며, 원은 행성계의 경계를 의미한다. 이러한 경로는 여러 개 존재할 수 있지만 적어도 3번의 행성계 진입/이탈이 필요하다는 것을 알 수 있다.</p>

<p>위와 같은 은하수 지도, 출발점, 도착점이 주어졌을 때 어린 왕자에게 필요한 최소의 행성계 진입/이탈 횟수를 구하는 프로그램을 작성해 보자. 행성계의 경계가 맞닿거나 서로 교차하는 경우는 없다. 또한, 출발점이나 도착점이 행성계 경계에 걸쳐진 경우 역시 입력으로 주어지지 않는다.</p>

### 입력 

 <p>입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다. 그 다음 줄부터 각각의 테스트케이스에 대해 첫째 줄에 출발점 (x<sub>1</sub>, y<sub>1</sub>)과 도착점 (x<sub>2</sub>, y<sub>2</sub>)이 주어진다. 두 번째 줄에는 행성계의 개수 n이 주어지며, 세 번째 줄부터 n줄에 걸쳐 행성계의 중점과 반지름 (c<sub>x</sub>, c<sub>y</sub>, r)이 주어진다.</p>

### 출력 

 <p>각 테스트 케이스에 대해 어린 왕자가 거쳐야 할 최소의 행성계 진입/이탈 횟수를 출력한다.</p>

