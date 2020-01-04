#ifndef _STRING_H
#define _STRING_H

class String
{
public:
    String();                        //default
    String(const String &stringSrc); // copy
    String(char *lpsz);
    String(const char *lpcsz);
    String(char ch);
    String(long l);
    String(int i);
    String(double d);
    ~String();

    int GetLength() const;
    bool IsEmpty() const;
    void Empty();
    char GetAt(int index) const;
    void SetAt(int index, char ch);
    int Compare(const String &s) const;
    int CompareNoCase(const String &s) const;
    void Concat(const String &str);

    operator const char *() const;

    char operator[](int index) const;
    const String &operator=(const String &stringSrc);
    const String &operator+=(const String &string);

    String operator+(const String &str) const;
    bool operator==(const String &str) const;
    bool operator!=(const String &str) const;
    bool operator>(const String &str) const;

    String Mid(int nFirst, int count = -1) const;
    String Left(int nCount) const;
    String Right(int nCount) const;

    void MakeUpper();
    void MakeLower();

    int Replace(const String &strOld, const String &strNew);
    int Find(const String &str, int nStart = 0) const;
    int ReverseFind(char ch) const;
    int FindOneOf(const char *lpszSep) const;
    int FindNoCase(const String &str, int nStart = 0) const;

    void TrimLeft();
    void TrimRight();

    void Format(const char *lpszFormat, ...);

    String GetToken(const char *lpszSep, int &nPos);

protected:
    char *m_pBuffer;

    void _init();
    void _clear();
    void _copy(const char *lpsz);
};
#endif