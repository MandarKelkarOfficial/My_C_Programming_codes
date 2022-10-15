 for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            s1[j].Student_total[j]= s1[j].Student_total[j]+s1[j].Student_marks[j];
        }
       s1[i].Student_total[j]= s1[j].Student_total[j];
    }
    for ( i = 0; i < 3; i++)
    {
        printf("%d \n",s1[i].Student_total[i]);
    }
    
    
     for ( i = 0; i < 3; i++)
     {
      printf("%s \n%d \n%d\n%f \n\n",s1[i].Student_name[i],s1[i].Student_id[i],s1[i].Student_total[i]);
     }