 class CPU{
double price;
public class Processor
{
int cores;
String manufacturer;
void info(int c, String m)
{
cores=c;
manufacturer=m;
System.out.println("\n_PROCESSOR INFORMATION_");
System.out.println("No.of Cores="+cores+"\nManufacturer name="+manufacturer);
}
}
static class RAM
{
double memory;
String manufacturer;
void info(double mem,String man)
{
memory=mem;
manufacturer=man;
System.out.println("\n_RAM INFORMATION_");
System.out.println("Memory="+memory+"GB\n"+"Manufacturer Name="+manufacturer);
}
}
public static void main(String[] args){
CPU cpu=new CPU();
CPU.Processor processor=cpu.new Processor();
CPU.RAM ram=new CPU.RAM();
processor.info(12,"manufact nmae");
ram.info(126,"INTEL");
}
}


