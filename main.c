#include <stdio.h>
#include <string.h>

#include "tp02.h"
#include "tp03.h"
#include "tp04.h"
#include "tp05.h"
#include "tp06.h"

#include "pr01.h"
#include "pr02.h"
#include "pr03.h"
#include "pr04.h"
#include "pr05.h"
#include "pr06.h"
#include "pr07.h"



int main() {

    char strUpper[100];
    char str[]="ola mundo";
    char *pstr=&str;

    str_to_upper(pstr,strUpper);

    printf("String: %s",strUpper);
}
