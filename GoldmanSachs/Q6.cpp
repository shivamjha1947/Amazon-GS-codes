string gcdOfStrings(string str1, string str2) {
    if(str1+str2 != str2+str1)
        return "";
    else if(str1==str2)
        return str1;            
    else
        return str1.substr(0, gcd(str1.length(),str2.length()));;        
}
