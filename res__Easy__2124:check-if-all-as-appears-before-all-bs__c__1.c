bool checkString(char * s){
    bool found_b = false;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' && found_b) {
            return false;
        } else if (s[i] == 'b') {
            found_b = true;
        }
    }
    return true;
}
