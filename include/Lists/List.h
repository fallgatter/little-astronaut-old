
#pragma once
#include<iostream>


namespace Lists{
    template< typename Tl>
    class List{
    private:
        template <typename Te> class Element;
        {
            Element<Te>* next;
            Te* data;
            ELement(T* pT = NULL) : data(dt), next(NULL){}
            ~Element(){
                data = NULL;
                next = NULL;
            }
        };
        int size;
        Element<T>* pFirst;
        Element<T> pLast;
    public:

        List(): pFIrst(NULL), pLast(NULL), size(0){}
        ~List(){
            clear();
            pFirst = NULL;
            pLast = NULL;
        }
        void insert_front(T* pT)
		{
			if (!pT)
			{
				return;
			}
			T* pAux = new Element<T>(pT);
			if (!pAux)
			{
				return;
			}
			size++;
			if (!pFirst)
			{
				pFirst = pAux;
				pLast = pAux;
				pAux = NULL;
				return;
			}
			pAux->next = pFirst;
			pFirst = pAux;
			pAux = NULL;
		}
        void insert_back(T* pT)
		{
			if (!pT)
			{
				return;
			}
			Element<T>* pAux = new Element<T>(pT);
			if (!pAux)
			{
				return;
			}
			size++;
			if (!pFirst)
			{
				pFirst = pAux;
				pLast = pAux;
				pAux = NULL;
				return;
			}
			pLast->next = pAux;
			pLast = pAux;
			pAux = NULL;
		}
        T* operator[](int idx)
		{
			if (idx < 0 || idx > size)
			{
				return NULL;
			}
			Element<T> *pAux = pFirst;
			if(pAux)
				for (int i = 0; i < idx; i++)
				{
					pAux = pAux->next;
				}
			return pAux->data;
		}
        const bool empty() const { return (size == 0 ? true : false); }

		const int getSize() const { return size; }
		
		void remove(int idx)
		{
			if (idx < 0 || idx > size)
			{
				return;
			}
			if (empty())
				return;
			Element<T>* pAux = pFirst;
			Element<T>* pAuxprev = NULL;
			for (int i = 0; i < idx; i++)
			{
				pAuxprev = pAux;
				pAux = pAux->next;
			}
			if (!pAux)
			{
				return;
			}
			if (!pAuxprev)
			{
				if (pAux == pLast)
				{
					pLast = NULL;
					pFirst = NULL;
				}
				else
					pFirst = pAux->next;
				delete pAux;
				pAux = NULL;
				size--;
				return;
			}
			if (pAux == pLast)
				pLast = pAuxprev;
			pAuxprev->next = pAux->next;
			delete pAux;
			pAux = NULL;
			pAuxprev = NULL;
			size--;
		}
		
		void clear()
		{
			if (empty())
				return;
			Element<T>* pAux = NULL;
			for (int i = 0; i < size; i++)
			{
				remove(i);
			}
		}
	};
} using namespace Lists;