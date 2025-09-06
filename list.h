class List {
    public:
        virtual void add(int num) = 0;
        virtual void removeAt(int pos) = 0;
        virtual int get(int pos) = 0;
        virtual void addAt(int num, int pos) = 0;
        virtual int remove(int num) = 0;
        // virtual void removeAll(int num) = 0;
        virtual void print() = 0;
        // Section 1
        virtual bool isEmpty() = 0;
        virtual bool contains(int num) = 0;
        virtual int find(int num) = 0;
        virtual int removeFirst() = 0;
        virtual int removeLast() = 0;
        virtual int removeAll() = 0;
        // Section 2
        virtual int term(int num) = 0;
        virtual int summation(int sum) = 0;
        // Section 3
        virtual int removeDuplicates(int num) = 0;
        virtual int shiftRight(int k) = 0;
        virtual int shiftLeft(int k) = 0;
};