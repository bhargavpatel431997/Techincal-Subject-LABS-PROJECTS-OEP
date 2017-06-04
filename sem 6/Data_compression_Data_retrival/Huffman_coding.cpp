#include<iostream>
#include<fstream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
struct node{
    char c;
    set<char> s;
    int freq;
    struct node *left;
    struct node *right;
};
struct sort_pred {
    bool operator()(const pair<int,char> &left, const pair<int,char> &right) {
        return left.first < right.first;
    }
};
void select_sort(node a[])
{
	int i,j,min;
	node temp;
	for(i=0;i<25;i++)
	{
	    min=i;
		for(j=i+1;j<26;j++)
		{
		  if(a[j].freq<a[min].freq)
			min=j;
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}

int main()
{
    struct node v[26];
    for(int i=0;i<26;i++)
    {
        v[i].freq=0;
        v[i].c='a'+i;
        v[i].s.insert(v[i].c);
    }
    fstream f;
    f.open("data.txt",ios::in);
    char c=f.get();
    while(c!=EOF)
    {
        if(isalpha(c))
            v[tolower(c)-'a'].freq++;
        c=f.get();
    }
    select_sort(v);
    int i;
    for( i=0;v[i].freq==0;)
    {i++;}
    cout<<i<<endl;
    node *root=NULL,x=v[i];
    x.s.insert(v[i].c);
    root=&x;
    root->left=root->right=NULL;
    i++;
    for(;i<26;)
    {
        if(i+1<26)
        {
            vector<pair<int,char> >vl;
            vl.push_back(make_pair(root->freq,'L'));
            vl.push_back(make_pair(v[i].freq,'R'));
            vl.push_back(make_pair(v[i+1].freq,'R'));
            sort(vl.begin(),vl.end(),sort_pred());
            if(vl[0].second=='L'||vl[1].second=='L')
            {
                    node *a,*b;
                    a=new node();
                    b=new node();
                    a->freq=v[i].freq;
                    a->c=v[i].c;
                    a->s.insert(v[i].c);
                    a->left=a->right=b->left=b->right=NULL;
                    b->freq=a->freq + root->freq;
                    b->s.insert(a->s.begin(),a->s.end());
                    b->s.insert(root->s.begin(),root->s.end());
                    if(vl[0].second=='L')
                    {
                        b->left=root;
                        b->right=a;
                        root=b;
                    }
                    else
                    {
                       b->left=a;
                       b->right=root;
                       root=b;
                    }
                    i++;
            }
            else
            {
                node *a,*b,*c,*d;
                a=new node();
                b=new node();
                c=new node();
                d=new node();
                a->freq=v[i].freq;
                a->c=v[i].c;
                a->s.insert(v[i].c);
                b->freq=v[i+1].freq;
                b->c=v[i+1].c;
                b->s.insert(v[i+1].c);
                a->left=a->right=b->left=b->right=c->left=c->right=d->left=d->right=NULL;
                c->freq=a->freq+b->freq;
                c->s.insert(a->s.begin(),a->s.end());
                c->s.insert(b->s.begin(),b->s.end());
                d->freq=c->freq+root->freq;
                d->s.insert(c->s.begin(),c->s.end());
                d->s.insert(root->s.begin(),root->s.end());
                if(c->freq<root->freq)
                {
                    d->left=root;
                    d->right=c;
                    root=d;
                }
                else
                {
                    d->right=root;
                    d->left=c;
                    root=d;
                }
                i+=2;
            }
        }
        else
        {
            node *y=new node();
            y->freq=v[i].freq;
            y->c=v[i].c;
            y->s.insert(v[i].c);
            node *z=new node();
            y->s.insert(v[i].c);
            y->left=y->right=z->left=z->right=NULL;
            z->s.insert(root->s.begin(),root->s.end());
            z->s.insert(y->s.begin(),y->s.end());
            z->freq=root->freq+y->freq;
            if(root->freq<v[i].freq)
            {
                z->left=root;
                z->right=y;
                root=z;
            }
            else
            {
                z->left=y;
                z->right=root;
                root=z;
            }
            i++;
        }
    }
    for( i=0;v[i].freq==0;){i++;}
    for(;i<26;i++)
    {
        node *x=root;
        char to=v[i].c;
        cout<<endl;
        cout<<to<<" ";
        while(x!=NULL)
        {
            if(x->left!=NULL && x->left->s.find(to)!=x->left->s.end())
            {
                cout<<"0";
                x=x->left;
            }
            else if(x->right!=NULL && x->right->s.find(to)!=x->right->s.end())
            {
                cout<<"1";
                x=x->right;
            }
            else
                x=NULL;
        }
    }
    return 0;
}
