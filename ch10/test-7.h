class plorg
{
private:
    enum {Max = 20};
    char name[Max];
    int CI;
public:
    plorg(const char *s = "Plorg",const int n = 50);
    void set_CI(const int n);
    void show() const;
};