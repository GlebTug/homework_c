#include <stdio.h>

int main(int argc, char **argv)
{
	//~ A6
	//~ int a, b, diff;
	//~ scanf("%d%d", &a, &b);
	//~ diff = a - b;
	//~ printf("%d", diff);
	
	//~ A7
	//~ int a, b;
	
	//~ scanf("%d%d", &a, &b);
		
	//~ if(a < b){
		//~ printf("%d %d", a, b);	
	//~ }else {
		//~ printf("%d %d", b, a);
	//~ }
	
	//~ A8
	//~ int a, b, c;
	
	//~ scanf("%d%d%d", &a, &b, &c);
		
	//~ if(a > b && a > c){
		//~ printf("%d", a);	
	//~ } else if(b > a && b > c) {
		//~ printf("%d", b);
	//~ }else{
		//~ printf("%d", c);
	//~ }
	
	//~ A9
	//~ int a, b, c, d, e;
	//~ scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);	
	
	//~ if(a > b && a > c && a > d && a > e){
		//~ printf("%d", a);	
	//~ } else if(b > a && b > c && b > d && b > e) {
		//~ printf("%d", b);
	//~ } else if(c > a && c > b && c > d && c > e){
		//~ printf("%d", c);
	//~ } else if(d > a && d > b && d > c && d > e){
		//~ printf("%d", d);
	//~ }else{
		//~ printf("%d", e);
	//~ }
	
	//~ A10
	//~ int a, b, c, d, e;
	//~ scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);	
	
	//~ if(a < b && a < c && a < d && a < e){
		//~ printf("%d", a);	
	//~ } else if(b < a && b < c && b < d && b < e) {
		//~ printf("%d", b);
	//~ } else if(c < a && c < b && c < d && c < e){
		//~ printf("%d", c);
	//~ } else if(d < a && d < b && d < c && d < e){
		//~ printf("%d", d);
	//~ }else{
		//~ printf("%d", e);
	//~ }
	
	//~ A11
	//~ int a, b, c, d, e, max, min, sum;
	//~ scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);	
	
	//~ if(a < b && a < c && a < d && a < e){
		//~ min = a;
	//~ } else if(b < a && b < c && b < d && b < e) {
		//~ min = b;
	//~ } else if(c < a && c < b && c < d && c < e){
		//~ min = c;
	//~ } else if(d < a && d < b && d < c && d < e){
		//~ min = d;
	//~ }else{
		//~ min = e;
	//~ }
	
	//~ if(a > b && a > c && a > d && a > e){
		//~ max = a;
	//~ } else if(b > a && b > c && b > d && b > e) {
		//~ max = b;
	//~ } else if(c > a && c > b && c > d && c > e){
		//~ max = c;
	//~ } else if(d > a && d > b && d > c && d > e){
		//~ max = d;
	//~ }else{
		//~ max = e;
	//~ }
	
	//~ sum = max + min;
	
	//~ printf("%d", sum);
	
	//~ A14
	//~ int a, b, c, d, max;
	//~ scanf("%d", &a);
	
	//~ b = a%10;
	//~ c = (a/10)%10;
	//~ d = (a/100)%10;
	
	//~ max =  (b > c && b > d) ? b : c > d ? c : d;
	
	//~ printf("%d", max);
	
	//~ A15
	int X1, Y1, X2, Y2;
	float K, B;
	scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
	
	K = (float)(Y2 - Y1)/ (X2 - X1);
	B = (float)Y1 - K*X1;
	
	printf("%.2f %.2f", K, B);
	
	
	//~ A16
	//~ int a, b, c;
	
	//~ scanf("%d%d%d", &a, &b, &c);
	
	//~ if (a < b && b < c)
	//~ {
		//~ printf("YES");
	//~ }else {
		//~ printf("NO");
	//~ }
	
	//~ A17
	//~ int a;
	//~ scanf("%d", &a);
	
	//~ if (a == 12 || a == 1 || a == 2)
	//~ {
		//~ printf("winter");
	//~ } else if (a == 3 || a == 4 || a == 5)
	//~ {
		//~ printf("spring");
	//~ } else if (a == 6 || a == 7 || a == 8)
	//~ {
		//~ printf("summer");
	//~ } else if (a == 9 || a == 10 || a == 11)
	//~ {
		//~ printf("autumn");
	//~ }
	
	//~ A18
	//~ int a, b;
	
	//~ scanf("%d%d", &a, &b);
	
	//~ if (a > b)
	//~ {
		//~ printf("Above");
	//~ }else if (a < b)
	//~ {
		//~ printf("Less");
	//~ }else
	//~ {
		//~ printf("Equal");
	//~ }
	
	//~ A19
	//~ int a, b, c;
	
	//~ scanf("%d%d%d", &a, &b, &c);
	
	//~ if (a + b > c && a + c > b && b + c > a)
	//~ {
		//~ printf("YES");
	//~ } else
	//~ {
		//~ printf("NO");
	//~ }
	
	return 0;
}

