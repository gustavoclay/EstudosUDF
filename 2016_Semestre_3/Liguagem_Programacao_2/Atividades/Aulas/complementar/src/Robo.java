
public class Robo {
	private float x, y;

	public Robo() {
		super();
	}
	
	public Robo(int x, int y) {
		//this.x = x;
		//this.y = y;
		setX(x);
		setY(y);
	}
	
	public void setY(float y) {
		if (y > 0)
			this.y = y;
		else
			this.y = 0;
	}

	public void setX(float novoX) {
		if (novoX > 0)
			x = novoX;
		else
			x = 0;
	}

	public float getX() {
		return x;
	}

	public float getY() {
		return y;
	}
	
	public void status() {
		System.out.println("Estou aqui: ("+ x +","+ y+")");
	}
	

}








