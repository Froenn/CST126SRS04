#include "stdafx.h"

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>  
#include <crtdbg.h>  

#include "SLL.h"

int main()
{
	SLL listWomen;

	const auto woman0 = new CSWoman{ "Ada Lovelace", 1815, "Prophet of Computer Age" };
	const auto woman1 = new CSWoman{ "Edith Clarke", 1883, "Takes Charge" };
	const auto woman2 = new CSWoman{ "Grace Hopper", 1906, "Queen of Software" };
	const auto woman3 = new CSWoman{ "Evelyn Boyd Granville", 1924, "Race, Space, & Education Advocacy" };
	const auto woman4 = new CSWoman{ "Sister Mary Kenneth Keller", 1913, "First Female Computer Science PhD" };
	const auto woman5 = new CSWoman{ "Susan Kare", 1954, "The Apple Icon" };
	const auto woman6 = new CSWoman{ "Carol Shaw", 1955, "Atari Game Developer" };
	const auto woman7 = new CSWoman{ "Janese Swanson", 1958, "Sold Girl Tech to Radica Games Limited in 1998 for $6 million." };
	const auto woman8 = new CSWoman{ "Radia Perlman", 1951, "Created the algorithm behind the Spanning Tree Protocol (STP)" };
	const auto woman9 = new CSWoman{ "Kathleen McNulty", 1921, "One of the First Women Programmers" };

	listWomen.addNode(woman0);
	listWomen.addNode(woman1);
	listWomen.addNode(woman2);
	listWomen.addNode(woman3);
	listWomen.addNode(woman4);
	listWomen.addNode(woman5);
	listWomen.addNode(woman6);
	listWomen.addNode(woman7);
	listWomen.addNode(woman8);
	listWomen.addNode(woman9);

	listWomen.displaySLL();

	listWomen.reverseSLL();

	listWomen.displaySLL();

	delete woman0;
	delete woman1;
	delete woman2;
	delete woman3;
	delete woman4;
	delete woman5;
	delete woman6;
	delete woman7;
	delete woman8;
	delete woman9;

	//_CrtDumpMemoryLeaks();

    return 0;
}

