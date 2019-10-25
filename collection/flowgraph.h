#pragma once
#include"flowcollection.h"
#include <igraph.h>
#include <stdarg.h>
#include <iostream>

class flowgraph
{
public:
	flowgraph();
	flowgraph(flowcollection* flowcol);
	~flowgraph();


	igraph_t mygraph;
	igraph_vector_t v_dict_to_seq; //VECTOR( v_dict_to_seq)[org_id] -> sequence id
	igraph_vector_t v_dict_to_org; //VECTOR(v_dict_to_org)[seq_id] -> original id
	igraph_matrix_t adja_mat;
	
	//graph properties
	int vcount;// number of vertices 
	int ecount;//number of edges
	double average_shortest_path;
	double diameter;
	igraph_bool_t IsDirected; 

	int get_vcount();
	int get_ecount();
	void print();
	void print_dict_to_seq();
	void print_dict_to_org();
	void calculate_properties();
	void get_degree(vector<int>&);
	int get_degree_byid(int vid);
	


};

