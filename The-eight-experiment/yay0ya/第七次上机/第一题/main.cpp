#include"Graph.h"
int main() {
	MGraph G;
	int vex,p;
	cout<<"创建一个图"<<endl;
	CreateGraph(G);
	cout<<"输入你想查找的端点上的值"<<endl;
	cin>>vex;
	cout<<GetVex(G,vex)<<endl<<"如果返回的是端点值，表示存在该点，返回-1表示该点不存在"<<endl;
	cout<<"输入你想插入的端点值，并输入改变后的值"<<endl;
	cin>>vex;
	cin>>p;
	PutVex(G,vex,p);
	cout<<"遍历后值为"<<endl; 
	BFSTraverse(G);
	cout<<"删除一条边，请输入边的两个端点\n";
	cin>>vex;
	cin>>p;
	DeleteArc(G,vex,p);
	cout<<"遍历后值为"<<endl; 
	BFSTraverse(G);
	cout<<"进行深度优先搜索\n";
	DFSTraverse(G);
	cout<<"插入一个边"<<endl;
	cout<<"输入两个顶点的值"<<endl;
	cin>>vex;
	cin>>p;
	InsertArc(G,vex,p);
	cout<<"遍历后值为"<<endl; 
	BFSTraverse(G);
	cout<<endl;
	cout<<"插入一个顶点"<<endl;
	cout<<"输入顶点的值"<<endl;
	cin>>vex;
	InsertVex(G,vex);
		cout<<"遍历后值为"<<endl; 
	BFSTraverse(G);
	cout<<endl;
	cout<<"删除一个顶点"<<endl;
	cout<<"输入删除的顶点值"<<endl;
	cin>>vex;
	DeleteVex(G,vex);
	cout<<"遍历后值为"<<endl; 
	BFSTraverse(G);
	cout<<endl;
	cout<<"请输入一个顶点的值"<<endl;
	cin>>vex;
	cout<<"他在图中的位置是";
	cout<<FirstAdjVex(G,vex);
	cout<<endl;
	return 0; 
}
