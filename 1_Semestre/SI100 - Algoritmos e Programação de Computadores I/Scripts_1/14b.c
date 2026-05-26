#include <stdio.h>
	void proc1(int a,int b,int c,int d);
	void proc2(int a,int b,int c,int d);
	int main(){
		int a,c,b,d;
		char o;
		scanf ("%d %d %c %d %d",&a,&b,&o,&c,&d);
		if (o=='+'){
			proc1(a,b,c,d);
}
		else if (o=='*'){
			proc2(a,b,c,d);
}
return 0;
}
        void proc1(int a,int b,int c,int d){
		int res1,res2;
		res1=a+c;
		res2=b+d;
		printf ("%d + %di\n",res1,res2);
}
	void proc2(int a,int b,int c,int d){
		int res1,res2;
		res1=(a*c)-(b*d);
		res2=(a*d)+(b*c);
		printf ("%d + %di\n",res1,res2);
}
