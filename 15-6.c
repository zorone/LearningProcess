#include <stdio.h>
#include <string.h>

char nearestNeighbor(unsigned int a, unsigned int b, unsigned int c);
char dup(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f, unsigned int g, unsigned int h, unsigned int i, unsigned int j);
char mdup(char l, unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f, unsigned int g, unsigned int h, unsigned int i, unsigned int j);
char afar(char l, unsigned int a[0], unsigned int a[1], unsigned int a[2], unsigned int a[3], unsigned int a[4], unsigned int a[5], unsigned int a[6], unsigned int a[7], unsigned int a[8], unsigned int a[9]);

struct int_4_10
{
    unsigned int n0 : 4;
    unsigned int n1 : 4;
    unsigned int n2 : 4;
    unsigned int n3 : 4;
    unsigned int n4 : 4;
    unsigned int n5 : 4;
    unsigned int n6 : 4;
    unsigned int n7 : 4;
    unsigned int n8 : 4;
    unsigned int n9 : 4;
};


int main(){

    int_4_10 n;
    n.n0 = 0;
    n.n1 = 0;
    n.n2 = 0;
    n.n3 = 0;
    n.n4 = 0;
    n.n5 = 0;
    n.n6 = 0;
    n.n7 = 0;
    n.n8 = 0;
    n.n9 = 0;

    long long int ctr=0;

    for(n.n0=0; n.n0<10; n.n0++){
        for(n.n1=0; n.n1<10; n.n1++){
            if(mdup(1, n.n0, n.n1, n.n2, n.n3, n.n4, n.n5, n.n6, n.n7, n.n8, n.n9)) continue;
            for(n.n2=0; n.n2<10; n.n2++){
                if(mdup(2, n.n0, n.n1, n.n2, n.n3, n.n4, n.n5, n.n6, n.n7, n.n8, n.n9)) continue;
                for(n.n3=0; n.n3<10; n.n3++){
                    if(mdup(3, n.n0, n.n1, n.n2, n.n3, n.n4, n.n5, n.n6, n.n7, n.n8, n.n9)) continue;
                    for(n.n4=0; n.n4<10; n.n4++){
                        if(mdup(4, n.n0, n.n1, n.n2, n.n3, n.n4, n.n5, n.n6, n.n7, n.n8, n.n9)) continue;
                        for(n.n5=0; n.n5<10; n.n5++){
                            if(mdup(5, n.n0, n.n1, n.n2, n.n3, n.n4, n.n5, n.n6, n.n7, n.n8, n.n9)) continue;
                            for(n.n6=0; n.n6<10; n.n6++){
                                if(mdup(6, n.n0, n.n1, n.n2, n.n3, n.n4, n.n5, n.n6, n.n7, n.n8, n.n9)) continue;
                                for(n.n7=0; n.n7<10; n.n7++){
                                    if(mdup(7, n.n0, n.n1, n.n2, n.n3, n.n4, n.n5, n.n6, n.n7, n.n8, n.n9)) continue;
                                    for(n.n8=0; n.n8<10; n.n8++){
                                        if(mdup(8, n.n0, n.n1, n.n2, n.n3, n.n4, n.n5, n.n6, n.n7, n.n8, n.n9)) continue;
                                        for(n.n9=0; n.n9<10; n.n9++){
                                            if(afar(0, n.n0, n.n1, n.n2, n.n3, n.n4, n.n5, n.n6, n.n7, n.n8, n.n9)) continue;
                                            printf("%10lld %u%u%u%u%u%u%u%u%u%u\n", ctr, n.n0, n.n1, n.n2, n.n3, n.n4, n.n5, n.n6, n.n7, n.n8, n.n9);
                                            ctr+=1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

char dup(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f, unsigned int g, unsigned int h, unsigned int i, unsigned int j){
    if(a == b) return 1;
    if(a == c) return 1;
    if(a == d) return 1;
    if(a == e) return 1;
    if(a == f) return 1;
    if(a == g) return 1;
    if(a == h) return 1;
    if(a == i) return 1;
    if(a == j) return 1;
    if(b == c) return 1;
    if(b == d) return 1;
    if(b == e) return 1;
    if(b == f) return 1;
    if(b == g) return 1;
    if(b == h) return 1;
    if(b == i) return 1;
    if(b == j) return 1;
    if(c == d) return 1;
    if(c == e) return 1;
    if(c == f) return 1;
    if(c == g) return 1;
    if(c == h) return 1;
    if(c == i) return 1;
    if(c == j) return 1;
    if(d == e) return 1;
    if(d == f) return 1;
    if(d == g) return 1;
    if(d == h) return 1;
    if(d == i) return 1;
    if(d == j) return 1;
    if(e == f) return 1;
    if(e == g) return 1;
    if(e == h) return 1;
    if(e == i) return 1;
    if(e == j) return 1;
    if(f == g) return 1;
    if(f == h) return 1;
    if(f == i) return 1;
    if(f == j) return 1;
    if(g == h) return 1;
    if(g == i) return 1;
    if(g == j) return 1;
    if(h == i) return 1;
    if(h == j) return 1;
    if(i == j) return 1;

    return 0;

}

char nearestNeighbor(unsigned int a, unsigned int b, unsigned int c){

    if(a == 12) {
        if(b == c) return 1;
        return 0;
    }

    if(a == b) return 1;
    if(b == c) return 1;

    return 0;
}

char mdup(char l, unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f, unsigned int g, unsigned int h, unsigned int i, unsigned int j){
    switch(l){
        case 9:
            if(i == j) return 1;
            if(h == j) return 1;
            if(g == j) return 1;
            if(f == j) return 1;
            if(e == j) return 1;
            if(d == j) return 1;
            if(c == j) return 1;
            if(b == j) return 1;
            if(a == j) return 1;
        case 8:
            if(h == i) return 1;
            if(g == i) return 1;
            if(f == i) return 1;
            if(e == i) return 1;
            if(d == i) return 1;
            if(c == i) return 1;
            if(b == i) return 1;
            if(a == i) return 1;
        case 7:
            if(g == h) return 1;
            if(f == h) return 1;
            if(e == h) return 1;
            if(d == h) return 1;
            if(c == h) return 1;
            if(b == h) return 1;
            if(a == h) return 1;
        case 6:
            if(f == g) return 1;
            if(e == g) return 1;
            if(d == g) return 1;
            if(c == g) return 1;
            if(b == g) return 1;
            if(a == g) return 1;
        case 5:
            if(e == f) return 1;
            if(d == f) return 1;
            if(c == f) return 1;
            if(b == f) return 1;
            if(a == f) return 1;
        case 4:
            if(d == e) return 1;
            if(c == e) return 1;
            if(b == e) return 1;
            if(a == e) return 1;
        case 3:
            if(c == d) return 1;
            if(b == d) return 1;
            if(a == d) return 1;
        case 2:
            if(b == c) return 1;
            if(a == c) return 1;
        case 1:
            if(a == b) return 1;
        default:
            return 0;
        }

}

char afar(char l, unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int h, unsigned int g, unsigned int h, unsigned int i, unsigned int j){
    for(int loop1=l; loop1<10; i++){
        for(int loop2=0; loop2+loop1<5; loop2++){
            if(a[loop2+loop1] == a[9-loop2]) return 1;
        }
    }

}