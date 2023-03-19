#include <iostream>

using namespace std;

class Animal{
    // field
// access serectName is private
private: string secretName;
    // access of field public
public: string name;

    // static field
    bool static live;
    // method
    // access of method public
public: void soundAnimal() {
        cout << this->name << " sound" << endl;
    }

    // static method
    void static staicMethod(){
        cout << "this is static method" << endl;
    }
    // constructor method without input prameter
    Animal(){
        cout << "it is constractor without prameter";
    }

    // constructor with two input parameters
    Animal(string name, string secret = "secret"){
        cout << "it is constructor with two parameters" << endl;
        this->name = name;
        this->secretName = secret;
    }

    string getSecretName(){
        return this->secretName;
    }
};

// define fuction
int sum(int k){
    int sum = 0;
    // i++ --> i = i + 1
    // i +=2 --> i = i + 2
    for(int i=1; i<=k;i++){
        sum  = sum + i;
    }
    return sum;
}

int sum2(int k){
    //recursive
    if(k==1) return 1;
    return k + sum2(k-1);
}
// function
int main(){
    /*
    // create instance of Animal
    Animal dog;
    dog.soundAnimal();
    // create instance of Animal
    Animal cat;
    cat.name = "persionCat";
    cat.soundAnimal();
    dog.name = "jessy";
    dog.soundAnimal();
    //dog.secretName = "jan"; it is error for private
    //Animal::live = true;
    //cout << Animal::live;
    Animal::staicMethod();
    dog.staicMethod();
    cat.staicMethod();
    // create instance of Animal

    Animal snake("harry", "harryjon");
    snake.soundAnimal();

    Animal cow("jack");
    cow.soundAnimal();
    // return secrectname private field
    cout << cow.getSecretName();
    */

    // call function
    cout << sum(5) << endl;
    cout << sum2(5) << endl;


}
