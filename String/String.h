#ifndef String_h
#define String_h

class String{
    private:
    char* str{};
    int length{};
    public:
    String();
    ~String();
    String(const char* String& rhs);
    


};

#endif