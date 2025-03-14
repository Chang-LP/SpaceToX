#include <iostream>

using namespace std;

void convert(char *input, int c, char t){
	for(c; c; c--) input[c] == ' ' ? input[c] = t:0;
}

int main(int argc, char** argv) {
	int x=0; char tmp; char to;
	char a[256] = {0};
	scanf("%c", &tmp);
	while(tmp != '\n'){
		a[x] = tmp;
		x++;
		scanf("%c", &tmp);
	}
	scanf("%c", &to);
	convert(a, x, to);
	cout<<a<<endl;
	return 0;
}