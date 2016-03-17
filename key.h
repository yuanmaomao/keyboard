class key{
private:
	
public:
	bool state;
    int rows;
	int columns;
	bool row[16];//行状态
	bool column[8];//列状态
	bool rowscan[16];//行步进扫描
	bool columnscan[8];//列步进扫描
public:
	key(){
		state=0;
		rows=16;
		columns=8;
		for(int i=0;i<16;i++){
			row[i]=0;
		}
		for (int i = 0; i < 8; i++)
		{
			column[i]=0;
		}	
	}
	void start()
	{
	state=1;
	}
	void stop(){
	state=0;
	}
	void set(int i,int j)//按键记录。。。
	{
			for (int k = 0; k < 16; k++)
		{
			row[k]=0;
		}
		row[i]=1;
			for (int l = 0; l < 8; l++)
		{
			column[l]=0;
		}
		column[j]=1;
	
	
	}
	void clear()//清除键盘状态
	{
			for(int i=0;i<16;i++)
		{
			row[i]=0;
		}
		for (int i = 0; i < 8; i++)
		{
			column[i]=0;
		}
	
	}

};