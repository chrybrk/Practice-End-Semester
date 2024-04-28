public class Test {
    public static void main(String args[]) {
        SoloLeveling ref_variable = new SoloLeveling();
        ref_variable.WhichAnime("SoloLeveling");
        ref_variable.Rate(10); // 10/10
        ref_variable.IsPGRated(true);
        ref_variable.HasStory(true);
    }
}

interface Anime {
    public void Rate(int scale);
    public void WhichAnime(String name);
}

interface Hentai {
    public void IsPGRated(boolean value);
    public void HasStory(boolean value);
}

class SoloLeveling implements Anime, Hentai {
    // SoloLeveling has nun-hentai elements

    public void Rate(int scale) {
        System.out.println(scale);
    }

    public void WhichAnime(String name) {
        System.out.println(name);
    }

    public void IsPGRated(boolean value) {
        System.out.println(value);
    }

    public void HasStory(boolean value) {
        System.out.println(value);
    }
}
