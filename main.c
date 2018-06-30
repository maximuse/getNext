#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    char c;

    printf("Character: ");
    scanf("%c", &c);

    /*if(c == 'a') {
        c = 'e';
    }
    else if(c == 'e') {
        c = 'i';
    }
    else if(c == 'i') {
        c = 'o';
    }
    else if(c == 'o') {
        c = 'u';
    }
    else if(c == 'u') {
        c = 'a';
    }*/

    /*switch(c) {
        case 'a':
            c = 'e';
            break;
        case 'e':
            c = 'i';
            break;
        case 'i':
            c = 'o';
            break;
        case 'o':
            c = 'u';
            break;
        case 'u':
            c = 'a';
            break;
        default:
            // nothing to do
            break;
    }*/

    /*char conv(char c) {
        static const char from[] = {'a', 'e', 'i', 'o', 'u'};
        static const char to[] = {'e', 'i', 'o', 'u', 'a'};

        assert(sizeof(from) == sizeof(to));

        for (int i = 0; i < sizeof(from) / sizeof(from[0]); i++) {
            if(c == from[i]) {
                //return to[i];
                c = to[i];
                break;
            }
        }

        return c;
    }*/

    struct conv_t {
        char from;
        char to;
    };

    char conv(char c) {
        struct conv_t t[] = {
                {'a', 'e'},
                {'e', 'i'},
                {'i', 'o'},
                {'o', 'u'},
                {'u', 'a'}
        };

        for (int i = 0; i < sizeof(t) / sizeof(t[0]); i++) {
            if(c == t[i].from) {
                //return t[i].to;
                c = t[i].to;
                break;
            }
        }

        return c;
    }

    printf("%c\n", conv(c));

    system("PAUSE");
    return 0;
}