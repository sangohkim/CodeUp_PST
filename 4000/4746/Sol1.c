#include <stdio.h>

int main(void)
{
    int cur_h, cur_m, cur_s, spend_s, tot_s;
    
    scanf("%d %d %d", &cur_h, &cur_m, &cur_s);
    scanf("%d", &spend_s);
    tot_s = (cur_h * 3600 + cur_m * 60 + cur_s + spend_s) % (24 * 60 * 60);
    printf("%d %d %d", tot_s / 3600, tot_s % 3600 / 60, tot_s % 3600 % 60);
    
    return 0;
}
