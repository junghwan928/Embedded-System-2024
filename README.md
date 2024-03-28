# Embedded-System-2024
# 심화과정
IoT 시스템개발자 심화 임베디드 시스템 학습 리포지토리 = 라즈베리 파일에 다 넣어 놓음

## 1일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행
	- C++에 대해 설명


## 2일차
- sudo apt update
- sudo apt upgrade -y
- clear
	= 편집기: 코드 작업할때 사용 하는 프로그램(nano)
	= 한글 -> 
- 기본 명령어(C)
	=기존 PC 같이 사용 안됨 -> 순서에 맞추어서 사용(동작중에 다른 명령어 처리 안됨)
	
- cd / pwd / mkdir etc...
- ls = -a, -l, /etc
- nanorc => nano /etc/nanorc
- gcc -o test01 test01.c => ./test01
- gcc test01.c => ./a.out

- 리눅스 명령어 (https://m.hanbit.co.kr/channel/category/category_view.html?cms_code=CMS6390061632)
- enum(열거형)
- 별 찍기
- func(함수 정의 -> 함수 호출)
	- 함수 선언 -> 함수 호출 -> 함수 정의
- input 선언
- C언어로 계산기 만들기
- node로 이용한 list
	- freeList
	- showNode
	- addNode(전위함수)
	- appendNode(후위함수)
	- 연결 리스트의 노드 구조체 정의
	- delete
	
	


## 3일차
- typedef struct => node *head;
- headNode createHeadNode
- freeList
- malloc 함수

## 4일차
- 배열로 구현
  - push
  - pop
- 연결리스트 구현
  - front
  - rear
  - for문
## 5일차
- 연결ㄹ스트로 이용한 순차 자료구조
  - enQueue
  - deQueue
    
- 파일 분할 정리
  - makedir 파일 만들기
    
- 연력 자료구조를 위한 큐
  - deQueue
  - printQ

## 6일차
- 오름차순 정렬
   - 함수도 구현하기

- 순차 탐색 방법

- 이진 탐색
   - 함수도 구현하기

- 라즈베리 파일만들기
   - open("test02.txt", O_CREAT | O_WRONLY);: "test02.txt" 파일을 생성하거나
      열고 쓰기 전용으로 열고 O_CREAT 플래그는 파일이 존재하지 않을 때 파일을 새로 생성하기.
   
   - 파일 만들고 카피본 만들기!

## 7일차
- 라즈베리 파일 리눅스로 만들기

- test
   - 아이디와 비밀번호를 입력하여 맞으면 본인의 정보가 저장된 파일을 open



