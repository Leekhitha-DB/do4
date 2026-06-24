<build> 
<plugins> 
<plugin> 
<groupId>org.apache.maven.plugins</groupId> 
<artifactId>maven-compiler-plugin</artifactId> 
<version>3.8.1</version> 
<configuration> 
<source>1.8</source> 
<target>1.8</target> 
</configuration> 
</plugin> 
<plugin> 
<groupId>org.apache.maven.plugins</groupId> 
<artifactId>maven-jar-plugin</artifactId> 
<version>3.2.0</version> 
<configuration> 
<archive> 
<manifest> 
<addClasspath>true</addClasspath> 
<mainClass>org.example.Main</mainClass> 
</manifest> 
</archive> 
</configuration> 
</plugin> 
</plugins> 
</build>


plugins { 
  id 'java' 
} 
group = 'com.example' 
version = '1.0-SNAPSHOT' 
repositories { 
  mavenCentral() 
} 
dependencies { 
  testImplementation 'junit:junit:4.13.2' 
} 
jar { 
  manifest { 
    attributes('Main-Class': 'org.example.Main') 
  } 
}
