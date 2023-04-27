{
    node find_sucessor(int key)
    {
        node *temp=search(key,root)
        node sucessor=NULL;


        if(temp==NULL)
        {
            return NULL;

        }


        if(temp->right!=NULL)
        {
            temp=temp->right;
            while(temp->left!=NULLL)
            {
                temp=temp->left;
            }

            return temp;
        }

        else
        {
            node *temp2=root;

            while (temp2!=temp1)
            {
                if (temp2->value>temp->value)
                {
                    sucessor=temp2;
                    temp2=temp2->left;
                }

                else 
                {
                    temp2=temp2->right;
                }
            }

            return sucessor;

        }
    } 
}