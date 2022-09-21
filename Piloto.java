import java.util.Random;
public class Piloto{
    //Atributos
    private String nombre;
    private String clave;
    private String nacionalidad;
    private int edad;

    //Constructores
    public Piloto(){
    
    }

    public Piloto(String nombre, String clave, String nacionalidad, int edad){
        this.nombre=nombre;
        this.clave=clave;
        this.nacionalidad=nacionalidad;
        this.edad=edad;
    }
    //Setters y getters
    public void setNombre(String nombre){
        this.nombre=nombre;
    }

    public String getNombre(){
        return this.nombre;
    }

    public void setClave(){
        this.clave=//poner método generador de clave;
    }

    public String generarCLave(){
        String alf = "abcdefghijklmnopqrstuvwxyz";
        //Buscar función en random que tome valores al azar de un String
        //También podría ser generar arreglo de caracteres, tener un índice aleatorio y añadirlos al StringBuildet con appendX 
    }
}
