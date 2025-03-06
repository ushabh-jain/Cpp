#include <bits/stdc++.h>
using namespace std;

//NEXT GREATER ELEMENT - BSS YAAD RAKHNA HAI TRAVERSE KRNA HAI AUR DEKHTE JANA HAI JO CURR ELEMETNT HAI WOH STACK SE BDA HAI TO POP KRDO 

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1); // Agar koi greater element nahi mila to -1 store karenge
    stack<int> st; // Stack banaya jisme elements store honge

    for (int i = n - 1; i >= 0; i--) { // Peeche se traverse kar rahe hain
        while (!st.empty() && st.top() <= arr[i]) { // Stack se chhoti ya equal values hatao
            st.pop();
        }

        if (!st.empty()) { // Agar stack me kuch bacha hai to wahi next greater hai
            result[i] = st.top();
        }

        st.push(arr[i]); // Current element ko stack me push karo
    }

    return result;
}


//NEXT SMALLER ELEMENT 

vector<int> nextSmallerElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1); // Agar koi smaller element nahi mila to -1 store karenge
    stack<int> st; // Stack banaya jisme elements store honge

    for (int i = n - 1; i >= 0; i--) { // Peeche se traverse kar rahe hain
        while (!st.empty() && st.top() >= arr[i]) { // Stack se badi ya equal values hatao
            st.pop();
        }

        if (!st.empty()) { // Agar stack me kuch bacha hai to wahi next smaller hai
            result[i] = st.top();
        }

        st.push(arr[i]); // Current element ko stack me push karo
    }

    return result;
}


//PREVIOUS GREATER ELEMENT

vector<int> previousGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1); // Default value -1, agar greater element na mile
    stack<int> st;

    for (int i = 0; i < n; i++) { // Left se traverse kar rahe hain
        while (!st.empty() && st.top() <= arr[i]) { // Stack se chhoti ya equal values hatao
            st.pop();
        }

        if (!st.empty()) { // Agar stack me kuch bacha hai to wahi previous greater hai
            result[i] = st.top();
        }

        st.push(arr[i]); // Current element ko stack me push karo
    }

    return result;
}


//PREVIOUS SMALLER ELEMENT
vector<int> previousSmallerElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1); // Default value -1, agar smaller element na mile
    stack<int> st;

    for (int i = 0; i < n; i++) { // Left se traverse kar rahe hain
        while (!st.empty() && st.top() >= arr[i]) { // Stack se badi ya equal values hatao
            st.pop();
        }

        if (!st.empty()) { // Agar stack me kuch bacha hai to wahi previous smaller hai
            result[i] = st.top();
        }

        st.push(arr[i]); // Current element ko stack me push karo
    }

    return result;
}


int main() {
    vector<int> arr = {4, 8, 5, 2, 25};
    vector<int> result = nextGreaterElement(arr);

    cout << "Next Greater Elements: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
