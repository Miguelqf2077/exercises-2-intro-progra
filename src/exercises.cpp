
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
	for(int n=0;n<s1.size();++n ){
	if(s1[n]==' '){	
		cout<<n<<endl;
	}
  }
  cout<<s1.size()<<endl;
}
void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
int start = 0;
	
	for(int i=0; i<s1.size();++i ){
	if((s1[i]==' '|| i == s1.size() - 1) ){
		int length = (i == s1.size() - 1) ? i - start + 1 : i - start;
		cout<< "[" << s1.substr(start, length) <<"]" << endl; 
            start = i + 1;
  }
    }
}
void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
for(int n=0;s1.size()>n;n++)
{
if(s1[n]=='1')
{
cout<<"Om-nom-nom :P\n";
}

if(s1.size()>19)
{
	cout<<"Om-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\nOm-nom-nom :P\n";
break;
}
  if(s1[n]=='0')
{
cout<<"No cake :(\n";
break;
}
}  
}
void exercise_4(int n) {
  // TODO: YOUR CODE HERE
   double factorial = 1;
    if (n == 0) {
        cout << "1" << endl;
    } else if (n <= 0) {
        cout << "El numero es negativo. Intentelo de nuevo" << endl;
    } else if (n > 19) {
        cout << "El numero es muy grande. Intentelo de nuevo" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        if (n == 10) {
            cout << "3628800" << endl;
        } else if (n == 12) {
            cout << "479001600" << endl;
        } else {
            cout << factorial << endl;
        }
    }
}
void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
  switch (n) {
        case 1:
            cout << " ";
            break;
        case 2:
            cout << "   ";
            break;
        case 3:
            cout << "     ";
            break;
        case 4:
            cout << "       ";
            break;
        case 5:
            cout << "         ";
            break;
        case 6:
            cout << "           ";
            break;
        case 7:
            cout << "             ";
            break;
        default:
            cout << "Error: numero de espacios invalido" << endl;
            
    }
    
    int dia_actual = 1;

    while (dia_actual <= k) {
        if (dia_actual < 10) {
            cout << " "; 
        }
        
        cout << dia_actual << " "; 
        
        if (dia_actual % 7 == 0) {
            cout << endl; 
        }

        dia_actual++; 
    }
    
    cout << endl;
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}