int main()
{
	FILE *test;
	test= fopen("test.in.txt","r");
	fscanf(test,"%d", &nrNoduri);
    struct node *head = (struct node*)malloc(sizeof (struct node));
    head->next = NULL;
    citire(nrNoduri, test);
	printf("\n");
	dfs(head, 2);

	return 0;
}
