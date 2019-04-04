#include <stdio.h>
void main() {
    enum syllable {Do, Re, Mi, Fa} tone;

    for(tone=Do; tone<=Fa; tone+=1) {
        switch(tone) {
            case Do : printf("도"); break;
            case Re : printf("레"); break;
            case Mi : printf("미"); break;
            case Fa : printf("파"); break; 
        }
    }
}