#include <time.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct 
{
    /* allows for Tweets issued by the user to be co-authored by another account. */
    bool contributors_enabled; 

    /* Time created at */
    time_t created_at;

    /* Indicates whether the user has not altered theme or background */
    bool default_profile;

    /* Indicates whether the user has the default profile img */
    bool default_profile_image;

    /* UTF-8 description */
    unsigned char * description;
    int descriptionLength; /* The length of the description array */

    /* The entities associated with the user */
    entities_t * entities;
    int entitiesLength;

    /* The number of tweets this user has favorited in the account’s lifetime. */
    int favourites_count;   

    /* A request to follow the given user has been sent */
    bool follow_request_sent;
    bool follow_request_sentExists; /* Whether this value exists */

    /* Whether the current user is following the given user*/
    bool following;
    bool followingExists; /* Whether this value exists */

    /* The number of followers of this user */
    int followers_count;

    /* The number of friends the user has */
    int friends_count;

    /* Whether the user has geo tagging enabled on tweets */
    bool geo_enabled;

    /* The ID of the user. */
    uint64_t id; /* TODO(russell): Look into how this works on 32-bit machines */

    /* Whether or not the user is part of the translation program */
    bool is_translator;

    /* The BCP 47 code for the user’s self-declared user interface language. */
    unsigned char * lang;
    int langLength; /* The length of the char array to fill */

    /* The number of lists that the user is a member of */
    int listed_count;

    /* Non parseable, fuzzy user location */
    unsigned char * location;
    int locationLength;

    /* The users name */
    unsigned char * name;
    int nameLength; /* The length of the pointed name array */

    /* The hexadecimal color of their background */
    int profile_background_color;

    /* An URL to their background image */
    unsigned char * profile_background_image_url;
    int profile_background_image_urlLength; /* The length of the profile img url */

    /* A SSL URL to their background image */
    unsigned char * profile_background_image_url_https;
    int profile_background_image_url_httpsLength; 

    /* Indicates that the user’s backround should be tiled when displayed. */
    bool profile_background_tile;

    /* The HTTPS-based URL pointing to the standard web representation of the user’s uploaded profile banner */
    unsigned char * profile_banner_url;
    int profile_banner_urlLength; /* Array Length */

    /* A HTTP-based URL pointing to the user’s avatar image */
    unsigned char * profile_image_url;
    int profile_image_urlLength; /* Array Length */

    /* A HTTPS-based URL pointing to the user’s avatar image. */
    unsigned char * profile_image_url_https;
    int profile_image_url_httpsLength;

    /* The hexadecimal color the user has chosen to display links with in their Twitter UI. */
    int profile_link_color;

    /* The hexadecimal color the user has chosen to display sidebar borders with in their Twitter UI. */
    int profile_sidebar_border_color;

    /* The hexadecimal color the user has chosen to display sidebar backgrounds with in their Twitter UI. */
    int profile_sidebar_fill_color;

    /* The hexadecimal color the user has chosen to display text with in their Twitter UI */
    int profile_text_color;

    /* Indicates the user wants their uploaded background image to be used. */
    bool profile_use_background_image;

    /* indicates that this user has chosen to protect their Tweets */
    bool protected;

    /* The users public handle */
    char * screen_name;
    int screen_nameLength; /* The length of the array for screen_name */

    /* Indicates that the user would like to see media inline */
    bool show_all_inline_media;

    /* If possible, the user’s most recent tweet or retweet. NULL otherwise */
    tweet_t * status; 

    /* The number of tweets the user has */
    int statuses_count; 

    /* The time zone the user is in */
    char * time_zone;
    int time_zoneLength; /* The length of the time_zone array */

    /* A URL provided by the user in association with their profile. Nullable */
    char * url;
    int urlLength;

    /*  The offset from GMT/UTC in seconds. */
    int utc_offset;
    bool utc_offsetExists;

    /* indicates that the user has a verified account */
    bool verified;

    /* indicates a textual representation of the two-letter country codes this user is withheld from */
    char * withheld_in_countries;
    int withheld_in_countriesLength; /* Length of array */

    enum Withheld_Scope { withheld_user, withheld_status } withheld_scope;

} user_t;
