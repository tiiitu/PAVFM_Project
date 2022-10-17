int g();
void f(int i) {
	do {	
		if (i == 0)
			break;
	}
	while (g());       
}


