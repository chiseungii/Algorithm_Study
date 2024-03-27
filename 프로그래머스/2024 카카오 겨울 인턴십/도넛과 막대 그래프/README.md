**[Level 2] 도넛과 막대 그래프**

문제 링크: https://school.programmers.co.kr/learn/courses/30/lessons/258711?language=cpp

* 1. 노드 번호가 많고 랜덤이기 때문에 map을 이용해서 graph 생성
  2. 생성된 정점 찾기 -> 들어오는 edge가 없고 나가는 edge가 2개 이상 (나가는 edge 개수가 전체 그래프 개수)
  3. 막대 그래프와 8자 모양 그래프 개수 동시에 계산 -> 막대 그래프: 들어오는 edge가 없거나 나가는 edge가 없는 node의 개수, 8자 모양 그래프: 들어오는 edge와 나가는 edge가 모두 2개인 node의 개수
  4. 도넛 모양 그래프 개수 -> 전체 그래프 개수 - (막대 그래프 개수 + 8자 모양 그래프 개수)
