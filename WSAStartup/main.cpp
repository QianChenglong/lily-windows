#include <stdio.h>

#include <Winsock2.h>
#include <Windows.h>


int main(int argc, char *argv[])
{
    int res;

    while (1) {
        WSADATA wsadata;
        res = WSAStartup(0x0202, &wsadata);
        printf("WSAStartup 1 times:%d\n", res);

        if (res != 0) {
            printf("WSAStartup error:%d\n", WSAGetLastError());
            exit(1);
        }

        res = WSAStartup(0x0202, &wsadata);
        printf("WSAStartup 2 times:%d\n", res);

        if (res != 0) {
            printf("WSAStartup error:%d\n", WSAGetLastError());
            exit(1);
        }
    }

    return 0;
}
