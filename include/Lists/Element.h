
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
				//std::cout << "ERROR: List NULL Insertion" << std::endl;
				return;
			}
			T* pAux = new Element<T>(pT);
			if (!pAux)
			{
				//std::cout << "ERROR: Failed to Allocate Memory" << std::endl;
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
				//std::cout << "ERROR: List NULL Insertion" << std::endl;
				return;
			}
			Element<T>* pAux = new Element<T>(pT);
			if (!pAux)
			{
				//std::cout << "ERROR: Failed to Allocate Memory" << std::endl;
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
				//std::cout << "ERROR: List Segmentation Fault" << std::endl;
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
        
    };
} using namespace Lists;