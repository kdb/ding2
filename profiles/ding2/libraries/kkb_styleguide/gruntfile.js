module.exports = function (grunt) {

    grunt.initConfig({
        watch: {
            files: ['_/sass/**/*.scss', '_/js/*.js','*.html','styleguide-template/**','gruntfile.js', 'config.rb'],
//            tasks: ['compass:dev', 'shell'],
            tasks: ['compass:dev'],
            options: {
                livereload: true,
            }
        },
        compass: {
            dev: {
                options: {
                    config: 'config.rb'
                }
            }
        },
        shell: {
          styleguide: {
              command: 'kss-node _/css styleguide --css _/css/style.css --template styleguide-template'
          }
        }
    });

    grunt.loadNpmTasks('grunt-contrib-watch');
    grunt.loadNpmTasks('grunt-contrib-compass');
    grunt.loadNpmTasks('grunt-shell');
    
    grunt.registerTask('default', ['watch']);
    grunt.registerTask('style', ['compass:dev', 'shell']);

};


