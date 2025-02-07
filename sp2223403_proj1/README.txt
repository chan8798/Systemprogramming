실행파일 이름은 test.asm 이어야 하고
해당 파일에 cmd창을열고
make를 입력하면 아래와 같은 결과가 뜹니다.
gcc -c -o remake.o remake.c
gcc -c -o main.o main.c
gcc -c -o hexfind.o hexfind.c
gcc -c -o errorfile.o errorfile.c
gcc -o 2223403 remake.o main.o hexfind.o errorfile.o

다음에 2223403를 입력하면 실행결과가 뜨고 output..txt가 만들어 지고

다음 make clean을 입력하면 아래와 같은 결과가 뜨는데
del *.exe *.o *output.txt
이는 .exe파일  .o파일 output.txt 파일이 삭제 되는 것 입니다.
