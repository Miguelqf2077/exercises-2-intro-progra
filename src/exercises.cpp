
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
  int pasteles;
    int visitas = 0;

    while (true) {
        cin >> pasteles;

        if (pasteles == 1) {
            s1 = "Om-nom-nom :P";
            cout << s1 << endl;
        } else if (pasteles == 0) {
            s1 = "No cake :(";
            cout << s1 << endl;
            break;
        }

        visitas++;

        if (visitas >= 10) {
            s1 = "Se ha superado el limite de visitas. ¡Ya no queda mas pastel!";
            cout << s1 << endl;
            break;
        }
    }
    cout << s1 << endl;
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
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