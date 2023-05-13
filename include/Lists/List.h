
#pragma once

//Standard Libraries:
#include<iostream>

namespace Lists{
    template <typename Tl>
    class List{
    private:
        template <typename Te> class Element;
        {
            Element<Te>* next;
            Te* data;
            Element(Tl* pT = NULL) : data(dt), next(NULL){}
            ~Element(){
                data = NULL;
                next = NULL;
            }
        };
        int size;
        Element<Tl>* pFirst;
        Element<Tl>* pLast;
    public:

        List(): pFirst(NULL), pLast(NULL), size(0){}
        ~List(){
            clear();
            pFirst = NULL;
            pLast = NULL;
        }
        void insert_front(Tl* pT)
		{
			if (!pT)
			{
				return;
			}
			Tl* pAux = new Element<Tl>(pT);
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
        void insert_back(Tl* pT)
		{
			if (!pT)
			{
				return;
			}
			Element<Tl>* pAux = new Element<Tl>(pT);
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
        Tl* operator[](int idx)
		{
			if (idx < 0 || idx > size)
			{
				return NULL;
			}
			Element<Tl> *pAux = pFirst;
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
			Element<Tl>* pAux = pFirst;
			Element<Tl>* pAuxprev = NULL;
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
			Element<Tl>* pAux = NULL;
			for (int i = 0; i < size; i++)
			{
				remove(i);
			}
		}
	};
} using namespace Lists;