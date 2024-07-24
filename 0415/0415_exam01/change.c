void change(int *pa, int *pb){   // 함수의 정의
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}