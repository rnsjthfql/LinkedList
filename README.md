# LinkedList

데이터를 일정한 순서로 저장하는 자료 구조 중 하나

배열과 비슷한 역할을 하지만, 메모리의 연속적인 공간을 사용하지 않는다는 점에서 차이가 있음

## Linked List의 기본 구조

Linked List는 여러 개의 노드(Node)로 구성되며 각 노드는 두 가지 요소를 가짐

1. 데이터(Data): 저장된 값
2. 포인터(Next): 다음 노드를 가리키는 참조(주소)

![image](https://github.com/user-attachments/assets/d4e117a1-d7b5-4720-836b-fab5c42c0563)


### 장점
- 동적 크기 조정: 배열과 달리 크기를 미리 설정하지 않아도 됨
- 효율적인 삽입/삭제: 특정 노드 위치에서의 삽입 및 삭제가 빠름

### 단점
- 순차 접근: 임의 점근(Random Access)가 불가능
- 추가 메모리 사용: 포인터를 저장하기 위한 추가 공간이 필요
- 탐색 속도 느림: 노드를 차례대로 탐색해야함

