#pragma once

class Being{
    protected:
        int id;
    public:
        Being();
        virtual ~Being();
        virtual void run();
        void self_print();
};
