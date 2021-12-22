// Place your member function and program function definitions here:
//  1. The 2 Constructors
//  2. Accessor member function
//  3. Mutator member function #1
//  4. Mutator member function #2
//  5. Program function
// See lab description for details
//

AString::AString(){
    StringValue = "";
}
AString::AString(string arg){
    StringValue = arg;
}
void AString::getAString(){
    cout << "Enter string value: ";
    getline(cin, StringValue);
}
void AString::cleanUp(){
    int strSize = StringValue.size();
	for(int i = strSize - 1; i > -1; i--){
        if(isalpha(StringValue[i]) == 0){
            StringValue.erase(i, 1);
        }
    }
    int newStrSize = StringValue.size();
    for(int j = 0; j < newStrSize; j++){
		if(islower(StringValue[j]) == 0){
			StringValue[j] = StringValue[j] + 32;
		}
    }
}
void AString::countLetters(int arr[26]){
    for(int i = 0; i < StringValue.size(); i++){
        if(StringValue[i] == 'a'){
            arr[0] += 1;
        }
        if(StringValue[i] == 'b'){
            arr[1] += 1;
        }
        if(StringValue[i] == 'c'){
            arr[2] += 1;
        }
        if(StringValue[i] == 'd'){
            arr[3] += 1;
        }
        if(StringValue[i] == 'e'){
            arr[4] += 1;
        }
        if(StringValue[i] == 'f'){
            arr[5] += 1;
        }
        if(StringValue[i] == 'g'){
            arr[6] += 1;
        }
        if(StringValue[i] == 'h'){
            arr[7] += 1;
        }
        if(StringValue[i] == 'i'){
            arr[8] += 1;
        }
        if(StringValue[i] == 'j'){
            arr[9] += 1;
        }
        if(StringValue[i] == 'k'){
            arr[10] += 1;
        }
        if(StringValue[i] == 'l'){
            arr[11] += 1;
        }
        if(StringValue[i] == 'm'){
            arr[12] += 1;
        }
        if(StringValue[i] == 'n'){
            arr[13] += 1;
        }
        if(StringValue[i] == 'o'){
            arr[14] += 1;
        }
        if(StringValue[i] == 'p'){
            arr[15] += 1;
        }
        if(StringValue[i] == 'q'){
            arr[16] += 1;
        }
        if(StringValue[i] == 'r'){
            arr[17] += 1;
        }
        if(StringValue[i] == 's'){
            arr[18] += 1;
        }
        if(StringValue[i] == 't'){
            arr[19] += 1;
        }
        if(StringValue[i] == 'u'){
            arr[20] += 1;
        }
        if(StringValue[i] == 'v'){
            arr[21] += 1;
        }
        if(StringValue[i] == 'w'){
            arr[22] += 1;
        }
        if(StringValue[i] == 'x'){
            arr[23] += 1;
        }
        if(StringValue[i] == 'y'){
            arr[24] += 1;
        }
        if(StringValue[i] == 'z'){
            arr[25] += 1;
        }
    }
}
bool compareCounts(int arr1[26], int arr2[26]){
    for(int i = 0; i < 26; i++){
        if(arr1[i] != arr2[i]){
            return true;
        }
    }
    return false;
}