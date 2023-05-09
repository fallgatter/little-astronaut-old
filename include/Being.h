#pragma once

class Being{
    protected:
        int id;
    public:
        Being();
        Being(int type);
        virtual ~Being();
        virtual void run() = 0;
        void self_print();
        int get_Id () const;
};
