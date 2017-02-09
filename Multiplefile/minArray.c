

int min_array(int a[], int num_elements);

int min_array(int a[], int num_elements)
{
   int i, min=32000;
   for (i=0; i<num_elements; i++)
   {
	 if (a[i]<min)
	 {
	    min=a[i];
	 }
   }
   return(min);
}

