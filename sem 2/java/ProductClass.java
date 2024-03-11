class product
{
		String pcode;
		String pname;
		int price;
		product(String pcode_get,String pname_get,int price_get)
		{
			pcode=pcode_get;
			pname=pname_get;
			price=price_get;
		}
}
class ProductClass{
		public static void main(String[] args)
		{
			product p_1=new product("A1","TV",124);
			product p_2=new product("A2","RADIO",125);
			product p_3=new product("A3","DVD",126);
			if(p_1.price <=p_3.price && p_1.price <=p_2.price)
				System.out.println("Lowest product ID is :" + p_1.pcode);
			if(p_2.price <=p_1.price && p_2.price <=p_3.price)
				System.out.println("Lowest product ID is :" + p_2.pcode);
			if(p_3.price <=p_2.price && p_3.price <=p_1.price)
				System.out.println("Lowest product ID is :" + p_3.pcode);
		}
}
