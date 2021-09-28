#include <iostream>
#include <array>
#include <random>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::vector;

int main(){
    
    
    //TASK_1
    array<int, 10> arr = {};
    cout << "First massive: ";
    for (int i = 0; i < 10; ++i){
        arr[i] = 10;
        cout << arr[i] << ' ';
    }
    cout << endl;
    arr = {};
    cout << "Second massive: ";

    std::random_device rd;
    for (int i = 0; i < 10; ++i){
        arr[i] = rd() % 20 - 10;
        cout << arr[i] << ' ';
    }
    cout << endl;
    
    
    //TASK_2
    cout << "Copied massive: ";
    vector<double> vec(arr.begin(), arr.end());
    int sum = 0;
    for (int i: vec){
        cout << i << ' ';
        sum += i;
    }
    cout << endl;
    vec.erase(vec.begin()+3, vec.begin()+8);
    cout << "Massive with deleted components [3-7]: ";
    for (int i: vec){
        cout << i << ' ';
    }
    cout << endl;
    
    //vector<float> vec_(std::static_cast<float>(vec.begin()), std::static_cast<float>(vec.end());
    
    float add = -5.7;
    vec.insert(vec.end()-1, 4, add);
    cout << "Massive with added components: ";
    for (int i: vec){
        cout << i << ' ';
    }
    cout << endl;
    
    for (int i = 0; i < vec.size(); ++i){
        if (vec[i] != 0){
            vec.erase(vec.begin()+i);
            break;
        }
    }
    
    cout << "Massive with deleted first non-zero component: ";
    for (int i: vec){
        cout << i << ' ';
    }
    cout << endl;
    
    cout << "Massive with added num. of variant component: ";
    vec.insert(vec.end(), 10);
    for (int i: vec){
        cout << i << ' ';
    }
    cout << endl;
    
    cout << "Massive with edited components: ";
    for (int i = 0; i < vec.size(); ++i){
        vec[i] = vec[i]/(vec[0] - vec[vec.size()-1]);
        cout << vec[i] << ' ';
    }
    cout <<"\nCount of elenents: " << vec.size() << endl;
    cout << endl;
    
    
    //TASK_3
    std::string str("");
    cout << "Enter your string is: ";
    cin >> str;
    cout << "Your string is: " << str << endl;
    cout << "Length of string: " << str.length() << endl;
    float counter = 0;
    for (int i = 0; i < str.length(); ++i){
        if (str[i] > 'a' && str[i] <= 'z' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y'){
            counter++;
        }
    }
    cout << "Part of consonant small letters: " << counter / str.length() << endl;
    int i_1, i_2;
    cout << "Write cut indexes: ";
    cin >> i_1 >> i_2;
    std::string sub_str = str.substr(i_1, i_2 - i_1 + 1);
    cout << "Cut result: " << sub_str << endl;
    
    std::string str_("Can you can a can as a canner can can a can?");
    std::string str_1;
    cout << "Write your changeword: ";
    cin >> str_1;
    for (int i = 0; i < str_.length(); ++i){
        if ((str_[i] == 'c' || str_[i] == 'C') && str_[i+1] == 'a' && str_[i+2] == 'n' && (str_[i+3] == ' ' || str_[i+3] == '?')){
            str_.replace(i, 3, str_1);
        }
    }
    cout << str_ << endl;

    return 0;
}
