#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

void print_0nx(char ch2, long l)
{
unsigned char ch;
int i;

ch2 = ch2 - '0';
for (i = ch2 - 1; i >= 0; i--) {
ch = (l >> (i * 4)) & 0x0f;
if (ch < 10)
putch(ch + '0');
else
putch(ch - 10 + 'a');
}
}

/* 整数转化为十六进值字符串 */

/* 浮点数转化为字符串 */


/* 整数转化为字符串 */
void print_d(long l)
{
unsigned long  t;
int i, j, k ;
char buf[20];

if (l == 0)
{
putch('0');
return;
}

memset(buf,'0',8);
t = l;
k = 7;

for(;;)
{
if (t > 9)
{
i = t % 10;
}else
i = t;

if (i < 10){
buf[k--] = i + '0';
}

if (t < 9)
break;
t /= 10;
}
j = 0;
for(i =0 ;i < 8 ; i ++)
{
if(buf[i] != '0')
j = 1;
if (j)
putch(buf[i]);
}
}

int print_u(char *s, ...)
{
va_list ap;
unsigned long arg;
char *str;
char ch1, ch2, ch3;

va_start(ap, s);
while (*s != 0) {
if (*s == '%') {
s++;
ch1 = *s++;
if (ch1 == 's') {
str = va_arg(ap, char *);
puts(str);
}else if (ch1 == 'd') {
arg = va_arg(ap, long);
print_d(arg);
}
 else if (ch1 == 'x') {
arg = va_arg(ap, long);
print_x(arg);
}
else {
ch2 = *s++;
ch3 = *s++;
arg = va_arg(ap, long);
print_0nx(ch2, arg);
}
} else
putch(*s++);
}
va_end(ap);
return 0;

}

int uart_printf(char *s, ...)
{
va_list ap;
unsigned long arg;
double arg_f;
char *str;
char ch1, ch2, ch3;

va_start(ap, s);

while (*s != 0) {
if (*s == '%') {
s++;
ch1 = *s++;
if (ch1 == 's') {
str = va_arg(ap, char *);
print_u(str);
}else if (ch1 == 'd') {
arg = va_arg(ap, long);
print_d(arg);
}

else {
ch2 = *s++;
ch3 = *s++;
arg = va_arg(ap, long);
print_0nx(ch2, arg);
}
} else
putch(*s++);
}
va_end(ap);
return 0;
}

void main()
{
    int i = 9;


    uart_printf("asdf\n");
    uart_printf("i=%d\n", i);

    
}